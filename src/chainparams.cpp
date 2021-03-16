// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2017-2020 The Sato Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"
#include "consensus/merkle.h"

#include "tinyformat.h"
#include "util.h"
#include "utilstrencodings.h"
#include "arith_uint256.h"

#include <assert.h>
#include "chainparamsseeds.h"

static CBlock CreateGenesisBlock(const char* pszTimestamp, const CScript& genesisOutputScript, uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    CMutableTransaction txNew;
    txNew.nVersion = 1;
    txNew.vin.resize(1);
    txNew.vout.resize(1);
    txNew.vin[0].scriptSig = CScript() << CScriptNum(0) << 486604799 << CScriptNum(4) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
    txNew.vout[0].nValue = genesisReward;
    txNew.vout[0].scriptPubKey = genesisOutputScript;

    CBlock genesis;
    genesis.nTime    = nTime;
    genesis.nBits    = nBits;
    genesis.nNonce = nNonce;
    genesis.nVersion = nVersion;
    genesis.vtx.push_back(MakeTransactionRef(std::move(txNew)));
    genesis.hashPrevBlock.SetNull();
    genesis.hashMerkleRoot = BlockMerkleRoot(genesis);
    return genesis;
}

/**
 * Build the genesis block. Note that the output of its generation
 * transaction cannot be spent since it did not originally exist in the
 * database.
 *
 * CBlock(hash=000000000019d6, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=4a5e1e, nTime=1231006505, nBits=1d00ffff, nNonce=2083236893, vtx=1)
 *   CTransaction(hash=4a5e1e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
 *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d0104455468652054696d65732030332f4a616e2f32303039204368616e63656c6c6f72206f6e206272696e6b206f66207365636f6e64206261696c6f757420666f722062616e6b73)
 *     CTxOut(nValue=50.00000000, scriptPubKey=0x5F1DF16B2B704C8A578D0B)
 *   vMerkleTree: 4a5e1e
 */
static CBlock CreateGenesisBlock(uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    const char* pszTimestamp = "Sato is a cryptocurrency born to help the world";
    const CScript genesisOutputScript = CScript() << ParseHex("00099992f5b2e2f02065c8a1706525fe95e249b24a594469a3c4cf7a51b8b2cc227fe6f391867a596d32e8057e5a6bc0f4a6b71f71851dc3278eecc70ec2ad42") << OP_CHECKSIG;
    return CreateGenesisBlock(pszTimestamp, genesisOutputScript, nTime, nNonce, nBits, nVersion, genesisReward);
}

void CChainParams::UpdateVersionBitsParameters(Consensus::DeploymentPos d, int64_t nStartTime, int64_t nTimeout)
{
    consensus.vDeployments[d].nStartTime = nStartTime;
    consensus.vDeployments[d].nTimeout = nTimeout;
}

void CChainParams::TurnOffSegwit() {
	consensus.nSegwitEnabled = false;
}

void CChainParams::TurnOffCSV() {
	consensus.nCSVEnabled = false;
}

void CChainParams::TurnOffBIP34() {
	consensus.nBIP34Enabled = false;
}

void CChainParams::TurnOffBIP65() {
	consensus.nBIP65Enabled = false;
}

void CChainParams::TurnOffBIP66() {
	consensus.nBIP66Enabled = false;
}

bool CChainParams::BIP34() {
	return consensus.nBIP34Enabled;
}

bool CChainParams::BIP65() {
	return consensus.nBIP34Enabled;
}

bool CChainParams::BIP66() {
	return consensus.nBIP34Enabled;
}

bool CChainParams::CSVEnabled() const{
	return consensus.nCSVEnabled;
}


/**
 * Main network
 */
/**
 * What makes a good checkpoint block?
 * + Is surrounded by blocks with reasonable timestamps
 *   (no blocks before with a timestamp after, none after with
 *    timestamp before)
 * + Contains no strange transactions
 */

class CMainParams : public CChainParams {
public:
    CMainParams() {
        strNetworkID = "main";
        consensus.nSubsidyHalvingInterval = 1050000;  //~ 2 yrs at 1 min block time
        consensus.nBIP34Enabled = true;
        consensus.nBIP65Enabled = true;
        consensus.nBIP66Enabled = true;
        consensus.nSegwitEnabled = true;
        consensus.nCSVEnabled = true;
        consensus.powLimit = uint256S("000fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 2016 * 60;
        consensus.nPowTargetSpacing = 1 * 60;
	consensus.fPowAllowMinDifficultyBlocks = false;
        consensus.fPowNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 1000;
        consensus.nMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 1199145601;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = 1230767999;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nOverrideRuleChangeActivationThreshold = 1000;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].bit = 6;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nStartTime = 1614625325;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nOverrideRuleChangeActivationThreshold = 1000;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].bit = 7;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nStartTime = 1614625325; 
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nOverrideRuleChangeActivationThreshold = 1000;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].bit = 8;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nStartTime = 1614625325;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nOverrideRuleChangeActivationThreshold = 1000;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].bit = 9;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nStartTime = 1614625325;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nOverrideRuleChangeActivationThreshold = 1000;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].bit = 10;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nStartTime = 1614625325;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nOverrideRuleChangeActivationThreshold = 1000;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nOverrideMinerConfirmationWindow = 2000;

        // The best chain should have at least this much work
        consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000000000001000100"); // Block 0

        // By default assume that the signatures in ancestors of this block are valid. Block# 1040000
        consensus.defaultAssumeValid = uint256S("0x00000018419cc48e14c5a8909e0599d4d7189439ae5a16cffb31df833f2ee0b2"); // Block 0

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 32-bit integer with any alignment.
         */
        pchMessageStart[0] = 0x63; // S
        pchMessageStart[1] = 0x56; // A
        pchMessageStart[2] = 0x65; // T
        pchMessageStart[3] = 0x65; // T
        nDefaultPort = 3333;
        nPruneAfterHeight = 100000;    
            

        genesis = CreateGenesisBlock(1614625325, 48389859, 0x1e00ffff, 2, 5000 * COIN);	
        consensus.hashGenesisBlock = genesis.GetHash();	
	
        assert(consensus.hashGenesisBlock == uint256S("0x00000018419cc48e14c5a8909e0599d4d7189439ae5a16cffb31df833f2ee0b2"));
        assert(genesis.hashMerkleRoot == uint256S("0x0b22541da6ad305c4b575f99aedff3d94a049c97bbbaabc278cfa0f9e11e8488"));

        vSeeds.emplace_back("173.249.40.91", false);
		vSeeds.emplace_back("161.97.177.107", false);
		vSeeds.emplace_back("144.91.121.51", false);

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,63);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,122);
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,128);
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x88, 0xB2, 0x1E};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x88, 0xAD, 0xE4};

        // Sato BIP44 cointype in mainnet is '175'
        nExtCoinType = 190;

        // vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_main, pnSeed6_main + ARRAYLEN(pnSeed6_main));

        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fMiningRequiresPeers = true;

        checkpointData = (CCheckpointData) {
            {
                { 0, uint256S("0x00000018419cc48e14c5a8909e0599d4d7189439ae5a16cffb31df833f2ee0b2")}
            }
        };

        chainTxData = ChainTxData{
            0,
            0,
            0
        };

        /** SATO Start **/
        // Burn Amounts
        nIssueAssetBurnAmount = 100 * COIN;
        nReissueAssetBurnAmount = 20 * COIN;
        nIssueSubAssetBurnAmount = 20 * COIN;
        nIssueUniqueAssetBurnAmount = 1 * COIN;
        nIssueMsgChannelAssetBurnAmount = 20 * COIN;
        nIssueQualifierAssetBurnAmount = 200 * COIN;
        nIssueSubQualifierAssetBurnAmount = 20 * COIN;
        nIssueRestrictedAssetBurnAmount = 300 * COIN;
        nAddNullQualifierTagBurnAmount = .02 * COIN;

        // Burn Addresses
        strIssueAssetBurnAddress = "SPAddAssetXXXXXXXXXXXXXXXXXXabnRh3";
        strReissueAssetBurnAddress = "SPReAddAssetXXXXXXXXXXXXXXXXYmFsqw";
        strIssueSubAssetBurnAddress = "SPAddSubAssetXXXXXXXXXXXXXXXZRX6tx";
        strIssueUniqueAssetBurnAddress = "SPAddUniqueAssetXXXXXXXXXXXXXyPYRy";
        strIssueMsgChannelAssetBurnAddress = "SPAddMessageAssetXXXXXXXXXXXWUMtVi";
        strIssueQualifierAssetBurnAddress = "SPAddAccessoryXXXXXXXXXXXXXXbdCR3C";
        strIssueSubQualifierAssetBurnAddress = "SPAddSubAccessoryXXXXXXXXXXXUa6jRS";
        strIssueRestrictedAssetBurnAddress = "SPAddRestrictedXXXXXXXXXXXXXXYzs6n";
        strAddNullQualifierTagBurnAddress = "SPAddTagXXXXXXXXXXXXXXXXXXXXaovJZj";

        // Global Burn Address
        strGlobalBurnAddress = "SPGenericBurnXXXXXXXXXXXXXXXYDgYFJ";

        nMaxReorganizationDepth = 60; // 60 at 1 minute block timespan is +/- 60 minutes.
        nMinReorganizationPeers = 4;
        nMinReorganizationAge = 60 * 60 * 12; // 12 hours

        nAssetActivationHeight = 6000; // Asset activated block height
        nMessagingActivationBlock = 6000; // Messaging activated block height
        nRestrictedActivationBlock = 6000; // Restricted activated block height
        /** SATO End **/
    }
};

/**
 * Testnet (v7)
 */
class CTestNetParams : public CChainParams {
public:
    CTestNetParams() {
        strNetworkID = "test";
        consensus.nSubsidyHalvingInterval = 0;
        consensus.nBIP34Enabled = true;
        consensus.nBIP65Enabled = true;
        consensus.nBIP66Enabled = true;
        consensus.nSegwitEnabled = true;
        consensus.nCSVEnabled = true;
        consensus.powLimit = uint256S("000fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 2016 * 60;
        consensus.nPowTargetSpacing = 1 * 60;
        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.fPowNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 750;
        consensus.nMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 1199145601;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = 1230767999;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nOverrideRuleChangeActivationThreshold = 750;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].bit = 6;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nStartTime = 1612952770;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nOverrideRuleChangeActivationThreshold = 750;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].bit = 7;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nStartTime = 1612952770; 
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nOverrideRuleChangeActivationThreshold = 750;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].bit = 8;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nStartTime = 1612952770;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nOverrideRuleChangeActivationThreshold = 750;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].bit = 9;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nStartTime = 1612952770;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nOverrideRuleChangeActivationThreshold = 750;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nOverrideMinerConfirmationWindow = 2000;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].bit = 10;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nStartTime = 1612952770;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nTimeout = 1644488770;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nOverrideRuleChangeActivationThreshold = 750;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nOverrideMinerConfirmationWindow = 2000;

        // The best chain should have at least this much work.
        consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000000000001000100");

        // By default assume that the signatures in ancestors of this block are valid.
        consensus.defaultAssumeValid = uint256S("0x0x0000007165bf941dbb44bc4d0b0a674da3ba29eeb83bf3eae093afc30fc1f0d7");

        pchMessageStart[0] = 0x63; // S
        pchMessageStart[1] = 0x56; // A
        pchMessageStart[2] = 0x65; // T
        pchMessageStart[3] = 0x65; // T
        nDefaultPort = 13333;
        nPruneAfterHeight = 1000;

        genesis = CreateGenesisBlock(1614506964, 8034895, 0x1e00ffff, 4, 10 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();

        assert(consensus.hashGenesisBlock == uint256S("0x0000007165bf941dbb44bc4d0b0a674da3ba29eeb83bf3eae093afc30fc1f0d7"));
        assert(genesis.hashMerkleRoot == uint256S("0x1644193a30f8009a3c00cb64579fa5645aa36473e480116a641aa689c4468363"));

        vFixedSeeds.clear();
        vSeeds.clear();

        vSeeds.emplace_back("testnet.sato.com", false);

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,125);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,196);
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,239);
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x35, 0x87, 0xCF};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x35, 0x83, 0x94};

        // Sato BIP44 cointype in testnet
        nExtCoinType = 5;

        // vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_test, pnSeed6_test + ARRAYLEN(pnSeed6_test));

        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fMiningRequiresPeers = true;

        checkpointData = (CCheckpointData) {
            {
                    { 0, uint256S("0x0000007165bf941dbb44bc4d0b0a674da3ba29eeb83bf3eae093afc30fc1f0d7")}
            }
        };

        chainTxData = ChainTxData{
            0,
            0,
            0
        };

        /** SATO Start **/
        // Burn Amounts
        nIssueAssetBurnAmount = 100 * COIN;
        nReissueAssetBurnAmount = 20 * COIN;
        nIssueSubAssetBurnAmount = 20 * COIN;
        nIssueUniqueAssetBurnAmount = 1 * COIN;
        nIssueMsgChannelAssetBurnAmount = 20 * COIN;
        nIssueQualifierAssetBurnAmount = 200 * COIN;
        nIssueSubQualifierAssetBurnAmount = 20 * COIN;
        nIssueRestrictedAssetBurnAmount = 300 * COIN;
        nAddNullQualifierTagBurnAmount = .02 * COIN;

        // Burn Addresses
        strIssueAssetBurnAddress = "TPAddAssetXXXXXXXXXXXXXXXXXXdSveee";
        strReissueAssetBurnAddress = "TPReAddAssetXXXXXXXXXXXXXXXXUN4wyz";
        strIssueSubAssetBurnAddress = "TPAddSubAssetXXXXXXXXXXXXXXXXH2Ptk";
        strIssueUniqueAssetBurnAddress = "TPAddUniqueAssetXXXXXXXXXXXXVyE4jV";
        strIssueMsgChannelAssetBurnAddress = "TPAddMessageAssetXXXXXXXXXXXZAhg4n";
        strIssueQualifierAssetBurnAddress = "TPAddAccessoryXXXXXXXXXXXXXXXrFee5";
        strIssueSubQualifierAssetBurnAddress = "TPAddSubAccessoryXXXXXXXXXXXYikU7z";
        strIssueRestrictedAssetBurnAddress = "TPAddRestrictedXXXXXXXXXXXXXXjyhPC";
        strAddNullQualifierTagBurnAddress = "TPAddTagXXXXXXXXXXXXXXXXXXXXWdpFQp";

        // Global Burn Address
        strGlobalBurnAddress = "TPGenericBurnXXXXXXXXXXXXXXXYUw6Gc";

        nMaxReorganizationDepth = 60; // 60 at 1 minute block timespan is +/- 60 minutes.
        nMinReorganizationPeers = 4;
        nMinReorganizationAge = 60 * 60 * 12; // 12 hours

        nAssetActivationHeight = 6000; // Asset activated block height
        nMessagingActivationBlock = 6000; // Messaging activated block height
        nRestrictedActivationBlock = 6000; // Restricted activated block height
        /** SATO End **/
    }
};

/**
 * Regression test
 */
class CRegTestParams : public CChainParams {
public:
    CRegTestParams() {
        strNetworkID = "regtest";
        consensus.nSubsidyHalvingInterval = 0;
        consensus.nBIP34Enabled = true;
        consensus.nBIP65Enabled = true;
        consensus.nBIP66Enabled = true;
        consensus.nSegwitEnabled = true;
        consensus.nCSVEnabled = true;
        consensus.powLimit = uint256S("7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 2016 * 60;
        consensus.nPowTargetSpacing = 1 * 60;
        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.fPowNoRetargeting = true;
        consensus.nRuleChangeActivationThreshold = 100;
        consensus.nMinerConfirmationWindow = 140;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = 999999999999ULL;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nOverrideRuleChangeActivationThreshold = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nOverrideMinerConfirmationWindow = 140;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].bit = 6;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nTimeout = 999999999999ULL;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nOverrideRuleChangeActivationThreshold = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_ASSETS].nOverrideMinerConfirmationWindow = 140;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].bit = 7;  // Assets (RIP5)
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nStartTime = 0; // GMT: Sun Mar 3, 2019 5:00:00 PM
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nTimeout = 999999999999ULL; // UTC: Wed Dec 25 2019 07:00:00
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nOverrideRuleChangeActivationThreshold = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_MSG_REST_ASSETS].nOverrideMinerConfirmationWindow = 140;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].bit = 8;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nTimeout = 999999999999ULL;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nOverrideRuleChangeActivationThreshold = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_TRANSFER_SCRIPT_SIZE].nOverrideMinerConfirmationWindow = 140;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].bit = 9;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nTimeout = 999999999999ULL;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nOverrideRuleChangeActivationThreshold = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_ENFORCE_VALUE].nOverrideMinerConfirmationWindow = 140;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].bit = 10;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nTimeout = 999999999999ULL;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nOverrideRuleChangeActivationThreshold = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_COINBASE_ASSETS].nOverrideMinerConfirmationWindow = 140;

        // The best chain should have at least this much work.
        consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000000000000000002");

        // By default assume that the signatures in ancestors of this block are valid.
        consensus.defaultAssumeValid = uint256S("0x2e663412a0826524bb64783ca46dfadf79b4385f83deb64f6e695af23921ec9d");

        pchMessageStart[0] = 0x63; // S
        pchMessageStart[1] = 0x56; // A
        pchMessageStart[2] = 0x65; // T
        pchMessageStart[3] = 0x65; // T
        nDefaultPort = 23333;
        nPruneAfterHeight = 1000;
		
		

        genesis = CreateGenesisBlock(1612952800, 10, 0x207fffff, 4, 10 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();

        assert(consensus.hashGenesisBlock == uint256S("0x2e663412a0826524bb64783ca46dfadf79b4385f83deb64f6e695af23921ec9d"));
        assert(genesis.hashMerkleRoot == uint256S("0x32e2020b161d1e78d8d65659d57f678d2456bc64b4690c2aa9ebaee469fb15a3"));

        vFixedSeeds.clear(); //!< Regtest mode doesn't have any fixed seeds.
        vSeeds.clear();      //!< Regtest mode doesn't have any DNS seeds.

        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;

        checkpointData = (CCheckpointData) {
            {
                { 0, { uint256S("0x2e663412a0826524bb64783ca46dfadf79b4385f83deb64f6e695af23921ec9d") }}
            }
        };

        chainTxData = ChainTxData{
            0,
            0,
            0
        };

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,60);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,196);
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,239);
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x35, 0x87, 0xCF};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x35, 0x83, 0x94};

        // Sato BIP44 cointype in regtest
        nExtCoinType = 1;

        /** SATO Start **/
        // Burn Amounts
        nIssueAssetBurnAmount = 100 * COIN;
        nReissueAssetBurnAmount = 20 * COIN;
        nIssueSubAssetBurnAmount = 20 * COIN;
        nIssueUniqueAssetBurnAmount = 1 * COIN;
        nIssueMsgChannelAssetBurnAmount = 20 * COIN;
        nIssueQualifierAssetBurnAmount = 200 * COIN;
        nIssueSubQualifierAssetBurnAmount = 20 * COIN;
        nIssueRestrictedAssetBurnAmount = 300 * COIN;
        nAddNullQualifierTagBurnAmount = .02 * COIN;

        // Burn Addresses
        strIssueAssetBurnAddress = "RPAddAssetXXXXXXXXXXXXXXXXXXZ671Zs";
        strReissueAssetBurnAddress = "RPReAddAssetXXXXXXXXXXXXXXXXUEct4y";
        strIssueSubAssetBurnAddress = "RPAddSubAssetXXXXXXXXXXXXXXXa8W3iq";
        strIssueUniqueAssetBurnAddress = "RPAddUniqueAssetXXXXXXXXXXXXYt5asd";
        strIssueMsgChannelAssetBurnAddress = "RPAddMessageAssetXXXXXXXXXXXXLJeKX";
        strIssueQualifierAssetBurnAddress = "RPAddAccessoryXXXXXXXXXXXXXXXHh62m";
        strIssueSubQualifierAssetBurnAddress = "RPAddSubAccessoryXXXXXXXXXXXWVgJpr";
        strIssueRestrictedAssetBurnAddress = "RPAddRestrictedXXXXXXXXXXXXXaMvNn5";
        strAddNullQualifierTagBurnAddress = "RPAddTagXXXXXXXXXXXXXXXXXXXXXp2n1s";

        // Global Burn Address
        strGlobalBurnAddress = "RPGenericBurnXXXXXXXXXXXXXXXYfYgbb";

        nMaxReorganizationDepth = 60; // 60 at 1 minute block timespan is +/- 60 minutes.
        nMinReorganizationPeers = 4;
        nMinReorganizationAge = 60 * 60 * 12; // 12 hours

        nAssetActivationHeight = 1000; // Asset activated block height
        nMessagingActivationBlock = 1100; // Messaging activated block height
        nRestrictedActivationBlock = 1200; // Restricted activated block height
        /** SATO End **/
    }
};

static std::unique_ptr<CChainParams> globalChainParams;

const CChainParams &GetParams() {
    assert(globalChainParams);
    return *globalChainParams;
}

std::unique_ptr<CChainParams> CreateChainParams(const std::string& chain)
{
    if (chain == CBaseChainParams::MAIN)
        return std::unique_ptr<CChainParams>(new CMainParams());
    else if (chain == CBaseChainParams::TESTNET)
        return std::unique_ptr<CChainParams>(new CTestNetParams());
    else if (chain == CBaseChainParams::REGTEST)
        return std::unique_ptr<CChainParams>(new CRegTestParams());
    throw std::runtime_error(strprintf("%s: Unknown chain %s.", __func__, chain));
}

void SelectParams(const std::string& network, bool fForceBlockNetwork)
{
    SelectBaseParams(network);
    if (fForceBlockNetwork) {
        bNetwork.SetNetwork(network);
    }
    globalChainParams = CreateChainParams(network);
}

void UpdateVersionBitsParameters(Consensus::DeploymentPos d, int64_t nStartTime, int64_t nTimeout)
{
    globalChainParams->UpdateVersionBitsParameters(d, nStartTime, nTimeout);
}

void TurnOffSegwit(){
	globalChainParams->TurnOffSegwit();
}

void TurnOffCSV() {
	globalChainParams->TurnOffCSV();
}

void TurnOffBIP34() {
	globalChainParams->TurnOffBIP34();
}

void TurnOffBIP65() {
	globalChainParams->TurnOffBIP65();
}

void TurnOffBIP66() {
	globalChainParams->TurnOffBIP66();
}
