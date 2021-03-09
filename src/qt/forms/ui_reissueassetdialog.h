/********************************************************************************
** Form generated from reading UI file 'reissueassetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REISSUEASSETDIALOG_H
#define UI_REISSUEASSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"
#include "satoamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_ReissueAssetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_10;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl1;
    QLabel *labelCoinControlFeatures;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QPushButton *pushButtonCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QSpacerItem *horizontalSpacerCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *checkBoxCoinControlChange;
    QValidatedLineEdit *lineEditCoinControlChange;
    QLabel *labelCoinControlChangeLabel;
    QSpacerItem *verticalSpacerCoinControl;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *assetNameLabel;
    QComboBox *comboBox;
    QLabel *reissueCostLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *addressLabel;
    QLineEdit *addressText;
    QHBoxLayout *horizontalLayout_15;
    QLabel *labelVerifierString;
    QLineEdit *lineEditVerifierString;
    QLabel *labelReissueVerifierStringErrorMessage;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *quantityLabel;
    QDoubleSpinBox *quantitySpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *unitLabel;
    QSpinBox *unitSpinBox;
    QLabel *unitExampleLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *reissuableBox;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *ipfsBox;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *ipfsText;
    QHBoxLayout *horizontalLayout_5;
    QLabel *messageLabel;
    QLabel *reissueWarningLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *currentDataLabel;
    QFrame *line;
    QTextBrowser *currentAssetData;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *reissueAssetDataLabel;
    QFrame *line_2;
    QTextBrowser *updatedAssetData;
    QSpacerItem *verticalSpacer;
    QFrame *frameFee;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayoutFee2;
    QHBoxLayout *horizontalLayoutFee1;
    QVBoxLayout *verticalLayoutFee7;
    QSpacerItem *verticalSpacerSmartFee;
    QHBoxLayout *horizontalLayoutSmartFee;
    QLabel *labelFeeHeadline;
    QLabel *labelFeeMinimized;
    QPushButton *buttonChooseFee;
    QSpacerItem *verticalSpacer_5;
    QLabel *fallbackFeeWarningLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonMinimizeFee;
    QFrame *frameFeeSelection;
    QVBoxLayout *verticalLayoutFee12;
    QGridLayout *gridLayoutFee;
    QVBoxLayout *verticalLayoutFee8;
    QHBoxLayout *horizontalLayoutFee13;
    QLabel *labelCustomPerKilobyte;
    SatoAmountField *customFee;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayoutFee8;
    QCheckBox *checkBoxMinimumFee;
    QLabel *labelMinFeeWarning;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayoutFee4;
    QRadioButton *radioSmartFee;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayoutFee9;
    QRadioButton *radioCustomFee;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayoutFee3;
    QHBoxLayout *horizontalLayoutFee12;
    QLabel *labelSmartFee;
    QLabel *labelFeeEstimation;
    QLabel *labelSmartFee2;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayoutFee9;
    QVBoxLayout *verticalLayoutFee6;
    QLabel *labelSmartFee3;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayoutFee5;
    QHBoxLayout *horizontalLayoutConfTarget;
    QComboBox *confTargetSelector;
    QSpacerItem *horizontalSpacerConfTarget;
    QSpacerItem *verticalSpacer_8;
    QCheckBox *optInRBF;
    QSpacerItem *verticalSpacerFee;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *reissueAssetButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QLabel *labelBalance;
    QButtonGroup *groupFee;

    void setupUi(QDialog *ReissueAssetDialog)
    {
        if (ReissueAssetDialog->objectName().isEmpty())
            ReissueAssetDialog->setObjectName(QStringLiteral("ReissueAssetDialog"));
        ReissueAssetDialog->resize(932, 1051);
        ReissueAssetDialog->setWindowTitle(QStringLiteral("Transaction details"));
        verticalLayout = new QVBoxLayout(ReissueAssetDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(16);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(20, 20, 20, 20);
        frameCoinControl = new QFrame(ReissueAssetDialog);
        frameCoinControl->setObjectName(QStringLiteral("frameCoinControl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frameCoinControl);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QStringLiteral("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayoutCoinControl->setContentsMargins(0, 0, -1, -1);
        horizontalLayoutCoinControl1 = new QHBoxLayout();
        horizontalLayoutCoinControl1->setObjectName(QStringLiteral("horizontalLayoutCoinControl1"));
        horizontalLayoutCoinControl1->setContentsMargins(-1, -1, -1, 15);
        labelCoinControlFeatures = new QLabel(frameCoinControl);
        labelCoinControlFeatures->setObjectName(QStringLiteral("labelCoinControlFeatures"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCoinControlFeatures->setFont(font);
        labelCoinControlFeatures->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutCoinControl1->addWidget(labelCoinControlFeatures);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl1);

        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QStringLiteral("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonCoinControl = new QPushButton(frameCoinControl);
        pushButtonCoinControl->setObjectName(QStringLiteral("pushButtonCoinControl"));
        pushButtonCoinControl->setStyleSheet(QStringLiteral(""));
        pushButtonCoinControl->setAutoDefault(false);

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(frameCoinControl);
        labelCoinControlAutomaticallySelected->setObjectName(QStringLiteral("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(frameCoinControl);
        labelCoinControlInsuffFunds->setObjectName(QStringLiteral("labelCoinControlInsuffFunds"));
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacerCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(frameCoinControl);
        widgetCoinControl->setObjectName(QStringLiteral("widgetCoinControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy2);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        widgetCoinControl->setStyleSheet(QStringLiteral(""));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setObjectName(QStringLiteral("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName(QStringLiteral("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QStringLiteral("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(14);
        formLayoutCoinControl1->setContentsMargins(10, 4, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setFont(font);
        labelCoinControlQuantityText->setMargin(0);

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setText(QStringLiteral("0"));
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));
        labelCoinControlBytesText->setFont(font);

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setText(QStringLiteral("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(14);
        formLayoutCoinControl2->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        labelCoinControlAmountText->setFont(font);
        labelCoinControlAmountText->setMargin(0);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setText(QStringLiteral("0.00 SATO"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);

        labelCoinControlLowOutputText = new QLabel(widgetCoinControl);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setFont(font);

        formLayoutCoinControl2->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(widgetCoinControl);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setText(QStringLiteral("no"));
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(14);
        formLayoutCoinControl3->setContentsMargins(6, 4, 6, -1);
        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setFont(font);
        labelCoinControlFeeText->setMargin(0);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setText(QStringLiteral("0.00 SATO"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(14);
        formLayoutCoinControl4->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font);
        labelCoinControlAfterFeeText->setMargin(0);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 SATO"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        labelCoinControlChangeText->setFont(font);

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QStringLiteral("0.00 SATO"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl4);

        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName(QStringLiteral("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(-1, 5, 5, -1);
        checkBoxCoinControlChange = new QCheckBox(frameCoinControl);
        checkBoxCoinControlChange->setObjectName(QStringLiteral("checkBoxCoinControlChange"));

        horizontalLayoutCoinControl4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QValidatedLineEdit(frameCoinControl);
        lineEditCoinControlChange->setObjectName(QStringLiteral("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy3);

        horizontalLayoutCoinControl4->addWidget(lineEditCoinControlChange);

        labelCoinControlChangeLabel = new QLabel(frameCoinControl);
        labelCoinControlChangeLabel->setObjectName(QStringLiteral("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy4);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        verticalSpacerCoinControl = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCoinControl->addItem(verticalSpacerCoinControl);


        verticalLayout_4->addLayout(verticalLayoutCoinControl);


        verticalLayout_10->addWidget(frameCoinControl);

        frame = new QFrame(ReissueAssetDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 12);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        assetNameLabel = new QLabel(frame);
        assetNameLabel->setObjectName(QStringLiteral("assetNameLabel"));

        horizontalLayout->addWidget(assetNameLabel);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        reissueCostLabel = new QLabel(frame);
        reissueCostLabel->setObjectName(QStringLiteral("reissueCostLabel"));
        reissueCostLabel->setMargin(5);

        horizontalLayout->addWidget(reissueCostLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addressLabel = new QLabel(frame);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        horizontalLayout_3->addWidget(addressLabel);

        addressText = new QLineEdit(frame);
        addressText->setObjectName(QStringLiteral("addressText"));

        horizontalLayout_3->addWidget(addressText);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        labelVerifierString = new QLabel(frame);
        labelVerifierString->setObjectName(QStringLiteral("labelVerifierString"));

        horizontalLayout_15->addWidget(labelVerifierString);

        lineEditVerifierString = new QLineEdit(frame);
        lineEditVerifierString->setObjectName(QStringLiteral("lineEditVerifierString"));

        horizontalLayout_15->addWidget(lineEditVerifierString);


        verticalLayout_6->addLayout(horizontalLayout_15);

        labelReissueVerifierStringErrorMessage = new QLabel(frame);
        labelReissueVerifierStringErrorMessage->setObjectName(QStringLiteral("labelReissueVerifierStringErrorMessage"));

        verticalLayout_6->addWidget(labelReissueVerifierStringErrorMessage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(34);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        quantityLabel = new QLabel(frame);
        quantityLabel->setObjectName(QStringLiteral("quantityLabel"));

        horizontalLayout_7->addWidget(quantityLabel);

        quantitySpinBox = new QDoubleSpinBox(frame);
        quantitySpinBox->setObjectName(QStringLiteral("quantitySpinBox"));
        quantitySpinBox->setDecimals(0);
        quantitySpinBox->setMinimum(0);
        quantitySpinBox->setMaximum(2.1e+10);
        quantitySpinBox->setValue(0);

        horizontalLayout_7->addWidget(quantitySpinBox);


        horizontalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        unitLabel = new QLabel(frame);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));

        horizontalLayout_6->addWidget(unitLabel);

        unitSpinBox = new QSpinBox(frame);
        unitSpinBox->setObjectName(QStringLiteral("unitSpinBox"));
        unitSpinBox->setMaximum(8);

        horizontalLayout_6->addWidget(unitSpinBox);

        unitExampleLabel = new QLabel(frame);
        unitExampleLabel->setObjectName(QStringLiteral("unitExampleLabel"));

        horizontalLayout_6->addWidget(unitExampleLabel);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 15, -1);
        reissuableBox = new QCheckBox(frame);
        reissuableBox->setObjectName(QStringLiteral("reissuableBox"));

        horizontalLayout_10->addWidget(reissuableBox);


        horizontalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, 15, -1);
        ipfsBox = new QCheckBox(frame);
        ipfsBox->setObjectName(QStringLiteral("ipfsBox"));
        ipfsBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_12->addWidget(ipfsBox);


        horizontalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));

        horizontalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ipfsText = new QLineEdit(frame);
        ipfsText->setObjectName(QStringLiteral("ipfsText"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ipfsText->sizePolicy().hasHeightForWidth());
        ipfsText->setSizePolicy(sizePolicy5);
        ipfsText->setMaxLength(64);
        ipfsText->setClearButtonEnabled(true);

        horizontalLayout_11->addWidget(ipfsText);


        horizontalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));

        verticalLayout_6->addLayout(horizontalLayout_5);

        messageLabel = new QLabel(frame);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setStyleSheet(QStringLiteral("color: red"));

        verticalLayout_6->addWidget(messageLabel);

        reissueWarningLabel = new QLabel(frame);
        reissueWarningLabel->setObjectName(QStringLiteral("reissueWarningLabel"));

        verticalLayout_6->addWidget(reissueWarningLabel);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalSpacer_2 = new QSpacerItem(5, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_10->addWidget(frame);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(34);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        frame_3 = new QFrame(ReissueAssetDialog);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        currentDataLabel = new QLabel(frame_3);
        currentDataLabel->setObjectName(QStringLiteral("currentDataLabel"));
        currentDataLabel->setFont(font);
        currentDataLabel->setLineWidth(1);

        verticalLayout_9->addWidget(currentDataLabel);

        line = new QFrame(frame_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line);

        currentAssetData = new QTextBrowser(frame_3);
        currentAssetData->setObjectName(QStringLiteral("currentAssetData"));
        currentAssetData->setLineWidth(0);
        currentAssetData->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        currentAssetData->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        currentAssetData->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_9->addWidget(currentAssetData);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);


        verticalLayout_8->addLayout(verticalLayout_9);


        horizontalLayout_9->addWidget(frame_3);

        frame_2 = new QFrame(ReissueAssetDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        reissueAssetDataLabel = new QLabel(frame_2);
        reissueAssetDataLabel->setObjectName(QStringLiteral("reissueAssetDataLabel"));
        reissueAssetDataLabel->setFont(font);

        verticalLayout_7->addWidget(reissueAssetDataLabel);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_2);

        updatedAssetData = new QTextBrowser(frame_2);
        updatedAssetData->setObjectName(QStringLiteral("updatedAssetData"));
        updatedAssetData->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        updatedAssetData->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        updatedAssetData->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_7->addWidget(updatedAssetData);

        verticalSpacer = new QSpacerItem(5, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_7);


        horizontalLayout_9->addWidget(frame_2);


        verticalLayout_10->addLayout(horizontalLayout_9);

        frameFee = new QFrame(ReissueAssetDialog);
        frameFee->setObjectName(QStringLiteral("frameFee"));
        sizePolicy.setHeightForWidth(frameFee->sizePolicy().hasHeightForWidth());
        frameFee->setSizePolicy(sizePolicy);
        frameFee->setFrameShape(QFrame::StyledPanel);
        frameFee->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frameFee);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayoutFee2 = new QVBoxLayout();
        verticalLayoutFee2->setSpacing(0);
        verticalLayoutFee2->setObjectName(QStringLiteral("verticalLayoutFee2"));
        verticalLayoutFee2->setContentsMargins(10, 0, -1, -1);
        horizontalLayoutFee1 = new QHBoxLayout();
        horizontalLayoutFee1->setObjectName(QStringLiteral("horizontalLayoutFee1"));
        horizontalLayoutFee1->setContentsMargins(-1, -1, -1, 0);
        verticalLayoutFee7 = new QVBoxLayout();
        verticalLayoutFee7->setSpacing(0);
        verticalLayoutFee7->setObjectName(QStringLiteral("verticalLayoutFee7"));
        verticalSpacerSmartFee = new QSpacerItem(1, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutFee7->addItem(verticalSpacerSmartFee);

        horizontalLayoutSmartFee = new QHBoxLayout();
        horizontalLayoutSmartFee->setSpacing(10);
        horizontalLayoutSmartFee->setObjectName(QStringLiteral("horizontalLayoutSmartFee"));
        labelFeeHeadline = new QLabel(frameFee);
        labelFeeHeadline->setObjectName(QStringLiteral("labelFeeHeadline"));
        sizePolicy1.setHeightForWidth(labelFeeHeadline->sizePolicy().hasHeightForWidth());
        labelFeeHeadline->setSizePolicy(sizePolicy1);
        labelFeeHeadline->setFont(font);
        labelFeeHeadline->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutSmartFee->addWidget(labelFeeHeadline);

        labelFeeMinimized = new QLabel(frameFee);
        labelFeeMinimized->setObjectName(QStringLiteral("labelFeeMinimized"));

        horizontalLayoutSmartFee->addWidget(labelFeeMinimized);

        buttonChooseFee = new QPushButton(frameFee);
        buttonChooseFee->setObjectName(QStringLiteral("buttonChooseFee"));

        horizontalLayoutSmartFee->addWidget(buttonChooseFee);


        verticalLayoutFee7->addLayout(horizontalLayoutSmartFee);

        verticalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee7->addItem(verticalSpacer_5);


        horizontalLayoutFee1->addLayout(verticalLayoutFee7);

        fallbackFeeWarningLabel = new QLabel(frameFee);
        fallbackFeeWarningLabel->setObjectName(QStringLiteral("fallbackFeeWarningLabel"));
        fallbackFeeWarningLabel->setFont(font);
        fallbackFeeWarningLabel->setWordWrap(false);

        horizontalLayoutFee1->addWidget(fallbackFeeWarningLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutFee1->addItem(horizontalSpacer_5);

        buttonMinimizeFee = new QPushButton(frameFee);
        buttonMinimizeFee->setObjectName(QStringLiteral("buttonMinimizeFee"));

        horizontalLayoutFee1->addWidget(buttonMinimizeFee);


        verticalLayoutFee2->addLayout(horizontalLayoutFee1);

        frameFeeSelection = new QFrame(frameFee);
        frameFeeSelection->setObjectName(QStringLiteral("frameFeeSelection"));
        verticalLayoutFee12 = new QVBoxLayout(frameFeeSelection);
        verticalLayoutFee12->setSpacing(0);
        verticalLayoutFee12->setObjectName(QStringLiteral("verticalLayoutFee12"));
        verticalLayoutFee12->setContentsMargins(0, 0, 0, 0);
        gridLayoutFee = new QGridLayout();
        gridLayoutFee->setObjectName(QStringLiteral("gridLayoutFee"));
        gridLayoutFee->setHorizontalSpacing(10);
        gridLayoutFee->setVerticalSpacing(4);
        gridLayoutFee->setContentsMargins(-1, 10, -1, 4);
        verticalLayoutFee8 = new QVBoxLayout();
        verticalLayoutFee8->setSpacing(6);
        verticalLayoutFee8->setObjectName(QStringLiteral("verticalLayoutFee8"));
        horizontalLayoutFee13 = new QHBoxLayout();
        horizontalLayoutFee13->setObjectName(QStringLiteral("horizontalLayoutFee13"));
        labelCustomPerKilobyte = new QLabel(frameFeeSelection);
        labelCustomPerKilobyte->setObjectName(QStringLiteral("labelCustomPerKilobyte"));

        horizontalLayoutFee13->addWidget(labelCustomPerKilobyte);

        customFee = new SatoAmountField(frameFeeSelection);
        customFee->setObjectName(QStringLiteral("customFee"));

        horizontalLayoutFee13->addWidget(customFee);

        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee13->addItem(horizontalSpacer_6);


        verticalLayoutFee8->addLayout(horizontalLayoutFee13);

        horizontalLayoutFee8 = new QHBoxLayout();
        horizontalLayoutFee8->setObjectName(QStringLiteral("horizontalLayoutFee8"));
        checkBoxMinimumFee = new QCheckBox(frameFeeSelection);
        checkBoxMinimumFee->setObjectName(QStringLiteral("checkBoxMinimumFee"));

        horizontalLayoutFee8->addWidget(checkBoxMinimumFee);

        labelMinFeeWarning = new QLabel(frameFeeSelection);
        labelMinFeeWarning->setObjectName(QStringLiteral("labelMinFeeWarning"));
        labelMinFeeWarning->setEnabled(true);
        labelMinFeeWarning->setMargin(5);

        horizontalLayoutFee8->addWidget(labelMinFeeWarning);

        horizontalSpacer_7 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee8->addItem(horizontalSpacer_7);


        verticalLayoutFee8->addLayout(horizontalLayoutFee8);


        gridLayoutFee->addLayout(verticalLayoutFee8, 1, 1, 1, 1);

        verticalLayoutFee4 = new QVBoxLayout();
        verticalLayoutFee4->setObjectName(QStringLiteral("verticalLayoutFee4"));
        radioSmartFee = new QRadioButton(frameFeeSelection);
        groupFee = new QButtonGroup(ReissueAssetDialog);
        groupFee->setObjectName(QStringLiteral("groupFee"));
        groupFee->addButton(radioSmartFee);
        radioSmartFee->setObjectName(QStringLiteral("radioSmartFee"));
        radioSmartFee->setChecked(true);

        verticalLayoutFee4->addWidget(radioSmartFee);

        verticalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee4->addItem(verticalSpacer_4);

        verticalLayoutFee4->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee4, 0, 0, 1, 1);

        verticalLayoutFee9 = new QVBoxLayout();
        verticalLayoutFee9->setObjectName(QStringLiteral("verticalLayoutFee9"));
        radioCustomFee = new QRadioButton(frameFeeSelection);
        groupFee->addButton(radioCustomFee);
        radioCustomFee->setObjectName(QStringLiteral("radioCustomFee"));

        verticalLayoutFee9->addWidget(radioCustomFee);

        verticalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee9->addItem(verticalSpacer_6);

        verticalLayoutFee9->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee9, 1, 0, 1, 1);

        verticalLayoutFee3 = new QVBoxLayout();
        verticalLayoutFee3->setSpacing(6);
        verticalLayoutFee3->setObjectName(QStringLiteral("verticalLayoutFee3"));
        verticalLayoutFee3->setContentsMargins(-1, 2, -1, -1);
        horizontalLayoutFee12 = new QHBoxLayout();
        horizontalLayoutFee12->setObjectName(QStringLiteral("horizontalLayoutFee12"));
        labelSmartFee = new QLabel(frameFeeSelection);
        labelSmartFee->setObjectName(QStringLiteral("labelSmartFee"));
        labelSmartFee->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee);

        labelFeeEstimation = new QLabel(frameFeeSelection);
        labelFeeEstimation->setObjectName(QStringLiteral("labelFeeEstimation"));

        horizontalLayoutFee12->addWidget(labelFeeEstimation);

        labelSmartFee2 = new QLabel(frameFeeSelection);
        labelSmartFee2->setObjectName(QStringLiteral("labelSmartFee2"));
        labelSmartFee2->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee2);

        horizontalSpacer_8 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee12->addItem(horizontalSpacer_8);


        verticalLayoutFee3->addLayout(horizontalLayoutFee12);

        horizontalLayoutFee9 = new QHBoxLayout();
        horizontalLayoutFee9->setObjectName(QStringLiteral("horizontalLayoutFee9"));
        verticalLayoutFee6 = new QVBoxLayout();
        verticalLayoutFee6->setObjectName(QStringLiteral("verticalLayoutFee6"));
        labelSmartFee3 = new QLabel(frameFeeSelection);
        labelSmartFee3->setObjectName(QStringLiteral("labelSmartFee3"));
        labelSmartFee3->setMargin(2);

        verticalLayoutFee6->addWidget(labelSmartFee3);

        verticalSpacer_7 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee6->addItem(verticalSpacer_7);


        horizontalLayoutFee9->addLayout(verticalLayoutFee6);

        verticalLayoutFee5 = new QVBoxLayout();
        verticalLayoutFee5->setObjectName(QStringLiteral("verticalLayoutFee5"));
        verticalLayoutFee5->setContentsMargins(-1, -1, 30, -1);
        horizontalLayoutConfTarget = new QHBoxLayout();
        horizontalLayoutConfTarget->setObjectName(QStringLiteral("horizontalLayoutConfTarget"));
        horizontalLayoutConfTarget->setContentsMargins(-1, -1, -1, 0);
        confTargetSelector = new QComboBox(frameFeeSelection);
        confTargetSelector->setObjectName(QStringLiteral("confTargetSelector"));

        horizontalLayoutConfTarget->addWidget(confTargetSelector);

        horizontalSpacerConfTarget = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutConfTarget->addItem(horizontalSpacerConfTarget);


        verticalLayoutFee5->addLayout(horizontalLayoutConfTarget);


        horizontalLayoutFee9->addLayout(verticalLayoutFee5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee9);

        verticalSpacer_8 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee3->addItem(verticalSpacer_8);

        verticalLayoutFee3->setStretch(2, 1);

        gridLayoutFee->addLayout(verticalLayoutFee3, 0, 1, 1, 1);


        verticalLayoutFee12->addLayout(gridLayoutFee);

        optInRBF = new QCheckBox(frameFeeSelection);
        optInRBF->setObjectName(QStringLiteral("optInRBF"));

        verticalLayoutFee12->addWidget(optInRBF);


        verticalLayoutFee2->addWidget(frameFeeSelection);

        verticalSpacerFee = new QSpacerItem(40, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee2->addItem(verticalSpacerFee);


        verticalLayout_5->addLayout(verticalLayoutFee2);


        verticalLayout_10->addWidget(frameFee);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        reissueAssetButton = new QPushButton(ReissueAssetDialog);
        reissueAssetButton->setObjectName(QStringLiteral("reissueAssetButton"));
        reissueAssetButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_8->addWidget(reissueAssetButton);

        clearButton = new QPushButton(ReissueAssetDialog);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout_8->addWidget(clearButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(3);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label = new QLabel(ReissueAssetDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_14->addWidget(label);

        labelBalance = new QLabel(ReissueAssetDialog);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));

        horizontalLayout_14->addWidget(labelBalance);


        horizontalLayout_8->addLayout(horizontalLayout_14);


        verticalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(verticalLayout_10);


        retranslateUi(ReissueAssetDialog);

        QMetaObject::connectSlotsByName(ReissueAssetDialog);
    } // setupUi

    void retranslateUi(QDialog *ReissueAssetDialog)
    {
        labelCoinControlFeatures->setText(QApplication::translate("ReissueAssetDialog", "Coin Control Features", Q_NULLPTR));
        pushButtonCoinControl->setText(QApplication::translate("ReissueAssetDialog", "Inputs...", Q_NULLPTR));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("ReissueAssetDialog", "automatically selected", Q_NULLPTR));
        labelCoinControlInsuffFunds->setText(QApplication::translate("ReissueAssetDialog", "Insufficient funds!", Q_NULLPTR));
        labelCoinControlQuantityText->setText(QApplication::translate("ReissueAssetDialog", "Quantity:", Q_NULLPTR));
        labelCoinControlBytesText->setText(QApplication::translate("ReissueAssetDialog", "Bytes:", Q_NULLPTR));
        labelCoinControlAmountText->setText(QApplication::translate("ReissueAssetDialog", "Amount:", Q_NULLPTR));
        labelCoinControlLowOutputText->setText(QApplication::translate("ReissueAssetDialog", "Dust:", Q_NULLPTR));
        labelCoinControlFeeText->setText(QApplication::translate("ReissueAssetDialog", "Fee:", Q_NULLPTR));
        labelCoinControlAfterFeeText->setText(QApplication::translate("ReissueAssetDialog", "After Fee:", Q_NULLPTR));
        labelCoinControlChangeText->setText(QApplication::translate("ReissueAssetDialog", "Change:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxCoinControlChange->setToolTip(QApplication::translate("ReissueAssetDialog", "If this is activated, but the change address is empty or invalid, change will be sent to a newly generated address.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxCoinControlChange->setText(QApplication::translate("ReissueAssetDialog", "Custom change address", Q_NULLPTR));
        labelCoinControlChangeLabel->setText(QString());
        assetNameLabel->setText(QApplication::translate("ReissueAssetDialog", "Select an asset to reissue:", Q_NULLPTR));
        reissueCostLabel->setText(QString());
        addressLabel->setText(QApplication::translate("ReissueAssetDialog", "Address:", Q_NULLPTR));
        addressText->setText(QString());
        addressText->setPlaceholderText(QApplication::translate("ReissueAssetDialog", "The SATO address that will hold this asset (You must own this address). Leave blank to create a new address.", Q_NULLPTR));
        labelVerifierString->setText(QApplication::translate("ReissueAssetDialog", "Verifier String:", Q_NULLPTR));
        lineEditVerifierString->setPlaceholderText(QApplication::translate("ReissueAssetDialog", "Create a verifier string built from Qualifier names e.g (#KYC & #VALID). Leave blank not change this", Q_NULLPTR));
        labelReissueVerifierStringErrorMessage->setText(QApplication::translate("ReissueAssetDialog", "Warning:", Q_NULLPTR));
        quantityLabel->setText(QApplication::translate("ReissueAssetDialog", "Quantity:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        quantitySpinBox->setToolTip(QApplication::translate("ReissueAssetDialog", "The number of assets that will be created", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        unitLabel->setText(QApplication::translate("ReissueAssetDialog", "Unit:", Q_NULLPTR));
        unitExampleLabel->setText(QApplication::translate("ReissueAssetDialog", "e.g. 1.00000000", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        reissuableBox->setToolTip(QApplication::translate("ReissueAssetDialog", "If the owner of this asset will be able to issue more assets in the future", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        reissuableBox->setText(QApplication::translate("ReissueAssetDialog", "Reissuable", Q_NULLPTR));
        ipfsBox->setText(QApplication::translate("ReissueAssetDialog", "Change IPFS/Txid Hash", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ipfsText->setToolTip(QApplication::translate("ReissueAssetDialog", "The ipfs/txid hash that contains information about the asset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ipfsText->setPlaceholderText(QApplication::translate("ReissueAssetDialog", "The ipfs/txid hash that is associated with the asset being created (e.g. QmU4h365LYMHx...)", Q_NULLPTR));
        messageLabel->setText(QApplication::translate("ReissueAssetDialog", "ERROR TEXT", Q_NULLPTR));
        reissueWarningLabel->setText(QString());
        currentDataLabel->setText(QApplication::translate("ReissueAssetDialog", "Current Asset Settings", Q_NULLPTR));
        reissueAssetDataLabel->setText(QApplication::translate("ReissueAssetDialog", "Updated Asset Settings", Q_NULLPTR));
        labelFeeHeadline->setText(QApplication::translate("ReissueAssetDialog", "Transaction Fee:", Q_NULLPTR));
        labelFeeMinimized->setText(QString());
        buttonChooseFee->setText(QApplication::translate("ReissueAssetDialog", "Choose...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fallbackFeeWarningLabel->setToolTip(QApplication::translate("ReissueAssetDialog", "Using the fallbackfee can result in sending a transaction that will take several hours or days (or never) to confirm. Consider choosing your fee manually or wait until you have validated the complete chain.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fallbackFeeWarningLabel->setText(QApplication::translate("ReissueAssetDialog", "Warning: Fee estimation is currently not possible.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonMinimizeFee->setToolTip(QApplication::translate("ReissueAssetDialog", "collapse fee-settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonMinimizeFee->setText(QApplication::translate("ReissueAssetDialog", "Hide", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelCustomPerKilobyte->setToolTip(QApplication::translate("ReissueAssetDialog", "If the custom fee is set to 1000 satoshis and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 satoshis in fee, while \"total at least\" pays 1000 satoshis. For transactions bigger than a kilobyte both pay by kilobyte.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelCustomPerKilobyte->setText(QApplication::translate("ReissueAssetDialog", "per kilobyte", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxMinimumFee->setToolTip(QApplication::translate("ReissueAssetDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks. But be aware that this can end up in a never confirming transaction once there is more demand for sato transactions than the network can process.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxMinimumFee->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelMinFeeWarning->setToolTip(QApplication::translate("ReissueAssetDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks. But be aware that this can end up in a never confirming transaction once there is more demand for sato transactions than the network can process.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelMinFeeWarning->setText(QApplication::translate("ReissueAssetDialog", "(read the tooltip)", Q_NULLPTR));
        radioSmartFee->setText(QApplication::translate("ReissueAssetDialog", "Recommended:", Q_NULLPTR));
        radioCustomFee->setText(QApplication::translate("ReissueAssetDialog", "Cus&tom:", Q_NULLPTR));
        labelSmartFee->setText(QString());
        labelFeeEstimation->setText(QString());
        labelSmartFee2->setText(QApplication::translate("ReissueAssetDialog", "(Smart fee not initialized yet. This usually takes a few blocks...)", Q_NULLPTR));
        labelSmartFee3->setText(QApplication::translate("ReissueAssetDialog", "Confirmation time target:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        optInRBF->setToolTip(QApplication::translate("ReissueAssetDialog", "Indicates that the sender may wish to replace this transaction with a new one paying higher fees (prior to being confirmed).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        optInRBF->setText(QApplication::translate("ReissueAssetDialog", "Request Replace-By-Fee", Q_NULLPTR));
        reissueAssetButton->setText(QApplication::translate("ReissueAssetDialog", "Reissue Asset", Q_NULLPTR));
        clearButton->setText(QApplication::translate("ReissueAssetDialog", "Clear", Q_NULLPTR));
        label->setText(QApplication::translate("ReissueAssetDialog", "Balance:", Q_NULLPTR));
        labelBalance->setText(QApplication::translate("ReissueAssetDialog", "123.456 SATO", Q_NULLPTR));
        Q_UNUSED(ReissueAssetDialog);
    } // retranslateUi

};

namespace Ui {
    class ReissueAssetDialog: public Ui_ReissueAssetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REISSUEASSETDIALOG_H
