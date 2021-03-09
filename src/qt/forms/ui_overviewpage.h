/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *splBalancesLabel;
    QPushButton *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *labelWatchImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelBalanceText;
    QLabel *labelWatchAvailable;
    QLabel *labelUnconfirmed;
    QFrame *lineWatchBalance;
    QLabel *labelSpendable;
    QLabel *labelImmatureText;
    QLabel *labelWatchTotal;
    QFrame *line;
    QLabel *labelWatchonly;
    QLabel *labelTotal;
    QLabel *labelBalance;
    QLabel *labelPendingText;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QLabel *labelWatchPending;
    QWidget *assetVerticalSpaceWidget2;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QFrame *assetFrame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *assetBalanceHorizontalLayout;
    QLabel *assetBalanceLabel;
    QPushButton *labelAssetStatus;
    QLineEdit *assetSearch;
    QFrame *assetBalanceLine;
    QListView *listAssets;
    QWidget *assetVerticalSpaceWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *recentTransactionsLabel;
    QPushButton *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAlerts;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1343, 759);
        OverviewPage->setAutoFillBackground(false);
        gridLayout_3 = new QGridLayout(OverviewPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(34);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(40, 40, 40, 40);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(34);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(10);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(12);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        splBalancesLabel = new QLabel(frame);
        splBalancesLabel->setObjectName(QStringLiteral("splBalancesLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        splBalancesLabel->setFont(font);

        horizontalLayout_4->addWidget(splBalancesLabel);

        labelWalletStatus = new QPushButton(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setEnabled(true);
        labelWalletStatus->setMaximumSize(QSize(30, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Disabled, QIcon::Off);
        labelWalletStatus->setIcon(icon);
        labelWalletStatus->setIconSize(QSize(24, 24));
        labelWalletStatus->setFlat(true);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        labelWatchImmature->setFont(font1);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font1);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy1);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font1);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SATO"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        assetVerticalSpaceWidget2 = new QWidget(OverviewPage);
        assetVerticalSpaceWidget2->setObjectName(QStringLiteral("assetVerticalSpaceWidget2"));
        assetVerticalSpaceWidget2->setAutoFillBackground(false);
        verticalLayout_6 = new QVBoxLayout(assetVerticalSpaceWidget2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        verticalLayout_2->addWidget(assetVerticalSpaceWidget2);

        assetFrame = new QFrame(OverviewPage);
        assetFrame->setObjectName(QStringLiteral("assetFrame"));
        assetFrame->setAutoFillBackground(true);
        assetFrame->setFrameShape(QFrame::NoFrame);
        assetFrame->setFrameShadow(QFrame::Plain);
        assetFrame->setLineWidth(0);
        verticalLayout_5 = new QVBoxLayout(assetFrame);
        verticalLayout_5->setSpacing(12);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        assetBalanceHorizontalLayout = new QHBoxLayout();
        assetBalanceHorizontalLayout->setObjectName(QStringLiteral("assetBalanceHorizontalLayout"));
        assetBalanceLabel = new QLabel(assetFrame);
        assetBalanceLabel->setObjectName(QStringLiteral("assetBalanceLabel"));
        assetBalanceLabel->setFont(font);

        assetBalanceHorizontalLayout->addWidget(assetBalanceLabel, 0, Qt::AlignVCenter);

        labelAssetStatus = new QPushButton(assetFrame);
        labelAssetStatus->setObjectName(QStringLiteral("labelAssetStatus"));
        labelAssetStatus->setEnabled(true);
        labelAssetStatus->setMaximumSize(QSize(30, 16777215));
        labelAssetStatus->setIcon(icon);
        labelAssetStatus->setIconSize(QSize(24, 24));
        labelAssetStatus->setFlat(true);

        assetBalanceHorizontalLayout->addWidget(labelAssetStatus);

        assetSearch = new QLineEdit(assetFrame);
        assetSearch->setObjectName(QStringLiteral("assetSearch"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(assetSearch->sizePolicy().hasHeightForWidth());
        assetSearch->setSizePolicy(sizePolicy2);
        assetSearch->setMinimumSize(QSize(0, 30));
        assetSearch->setMaximumSize(QSize(16777215, 30));
        assetSearch->setSizeIncrement(QSize(0, 0));
        assetSearch->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(13);
        assetSearch->setFont(font2);
        assetSearch->setMaxLength(32);
        assetSearch->setFrame(true);
        assetSearch->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        assetSearch->setClearButtonEnabled(true);

        assetBalanceHorizontalLayout->addWidget(assetSearch, 0, Qt::AlignBottom);


        verticalLayout_5->addLayout(assetBalanceHorizontalLayout);

        assetBalanceLine = new QFrame(assetFrame);
        assetBalanceLine->setObjectName(QStringLiteral("assetBalanceLine"));
        assetBalanceLine->setFrameShape(QFrame::HLine);
        assetBalanceLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(assetBalanceLine);

        listAssets = new QListView(assetFrame);
        listAssets->setObjectName(QStringLiteral("listAssets"));
        listAssets->setFrameShape(QFrame::NoFrame);
        listAssets->setLineWidth(0);
        listAssets->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);

        verticalLayout_5->addWidget(listAssets);

        assetVerticalSpaceWidget = new QWidget(assetFrame);
        assetVerticalSpaceWidget->setObjectName(QStringLiteral("assetVerticalSpaceWidget"));
        assetVerticalSpaceWidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(assetVerticalSpaceWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_5->addWidget(assetVerticalSpaceWidget);


        verticalLayout_2->addWidget(assetFrame);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(34);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        recentTransactionsLabel = new QLabel(frame_2);
        recentTransactionsLabel->setObjectName(QStringLiteral("recentTransactionsLabel"));
        recentTransactionsLabel->setFont(font);

        horizontalLayout_2->addWidget(recentTransactionsLabel);

        labelTransactionsStatus = new QPushButton(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setEnabled(true);
        labelTransactionsStatus->setMaximumSize(QSize(30, 16777215));
        labelTransactionsStatus->setIcon(icon);
        labelTransactionsStatus->setIconSize(QSize(24, 24));
        labelTransactionsStatus->setFlat(true);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_2->addWidget(listTransactions, 2, 0, 1, 1);

        line_3 = new QFrame(frame_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 0, 1, 1);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout_7, 0, 1, 1, 1);

        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(true);
        labelAlerts->setStyleSheet(QStringLiteral("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelAlerts, 0, 3, 1, 1);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        splBalancesLabel->setText(QApplication::translate("OverviewPage", "SATO Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Sato network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWalletStatus->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        assetBalanceLabel->setText(QApplication::translate("OverviewPage", "Asset Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelAssetStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Sato network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelAssetStatus->setText(QString());
        assetSearch->setPlaceholderText(QApplication::translate("OverviewPage", "Search", Q_NULLPTR));
        recentTransactionsLabel->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Sato network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTransactionsStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
