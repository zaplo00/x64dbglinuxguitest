TEMPLATE = app
TARGET = aegis

QT += widgets

FORMS += \
    src/ui/AboutDialog.ui \
    src/ui/AppearanceDialog.ui \
    src/ui/AssembleDialog.ui \
    src/ui/AttachDialog.ui \
    src/ui/BrowseDialog.ui \
    src/ui/CalculatorDialog.ui \
    src/ui/CloseDialog.ui \
    src/ui/CodepageSelectionDialog.ui \
    src/ui/ColumnReorderDialog.ui \
    src/ui/ComboBoxDialog.ui \
    src/ui/CommandHelpView.ui \
    src/ui/CPUArgumentWidget.ui \
    src/ui/CPUWidget.ui \
    src/ui/CustomizeMenuDialog.ui \
    src/ui/DataCopyDialog.ui \
    src/ui/EditBreakpointDialog.ui \
    src/ui/EditFloatRegister.ui \
    src/ui/EntropyDialog.ui \
    src/ui/ExceptionRangeDialog.ui \
    src/ui/FavouriteTools.ui \
    src/ui/GotoDialog.ui \
    src/ui/HexEditDialog.ui \
    src/ui/HexLineEdit.ui \
    src/ui/LineEditDialog.ui \
    src/ui/MainWindow.ui \
    src/ui/MessagesBreakpoints.ui \
    src/ui/PageMemoryRights.ui \
    src/ui/PatchDialog.ui \
    src/ui/PatchDialogGroupSelector.ui \
    src/ui/SelectFields.ui \
    src/ui/SettingsDialog.ui \
    src/ui/ShortcutsDialog.ui \
    src/ui/SimpleTraceDialog.ui \
    src/ui/StructWidget.ui \
    src/ui/SymbolView.ui \
    src/ui/VirtualModDialog.ui \
    src/ui/WordEditDialog.ui \
    src/ui/XrefBrowseDialog.ui \
    src/ui/YaraRuleSelectionDialog.ui

RESOURCES += \
    resource.qrc

HEADERS += \
    src/headers/aboutdialog.h \
    src/headers/appearancedialog.h \
    src/headers/assembledialog.h \
    src/headers/attachdialog.h \
    src/headers/browsedialog.h \
    src/headers/calculatordialog.h \
    src/headers/closedialog.h \
    src/headers/codepageselectiondialog.h \
    src/headers/columnreorderdialog.h \
    src/headers/comboboxdialog.h \
    src/headers/commandhelpview.h \
    src/headers/cpuargumentwidget.h \
    src/headers/cpuwidget.h \
    src/headers/customizemenudialog.h \
    src/headers/datacopydialog.h \
    src/headers/editbreakpointdialog.h \
    src/headers/editfloatregister.h \
    src/headers/entropydialog.h \
    src/headers/exceptionrangedialog.h \
    src/headers/favouritetools.h \
    src/headers/gotodialog.h \
    src/headers/hexeditdialog.h \
    src/headers/hexlineedit.h \
    src/headers/lineeditdialog.h \
    src/headers/messagesbreakpoints.h \
    src/headers/pagememoryrights.h \
    src/headers/patchdialog.h \
    src/headers/patchdialoggroupselector.h \
    src/headers/selectfields.h \
    src/headers/settingsdialog.h \
    src/headers/shortcutsdialog.h \
    src/headers/simpletracedialog.h \
    src/headers/structwidget.h \
    src/headers/symbolview.h \
    src/headers/virtualmoddialog.h \
    src/headers/wordeditdialog.h \
    src/headers/xrefbrowsedialog.h \
    src/headers/yararuleselectiondialog.h \
    src/headers/mainwindow.h \
    src/headers/abstracttableview.h \
    src/headers/cachedfontmetrics.h \
    src/headers/stringutil.h \
    src/headers/configuration.h \
    src/headers/miscutil.h \
    src/headers/actionhelpers.h \
    src/headers/menubuilder.h \
    src/headers/stdtable.h \
    src/headers/types.h \
    src/headers/entropy.h \
    src/headers/qentropyview.h \
    src/headers/shortcutedit.h \
    src/headers/historylineedit.h

SOURCES += \
    src/aboutdialog.cpp \
    src/appearancedialog.cpp \
    src/assembledialog.cpp \
    src/attachdialog.cpp \
    src/browsedialog.cpp \
    src/calculatordialog.cpp \
    src/closedialog.cpp \
    src/codepageselectiondialog.cpp \
    src/columnreorderdialog.cpp \
    src/comboboxdialog.cpp \
    src/commandhelpview.cpp \
    src/cpuargumentwidget.cpp \
    src/cpuwidget.cpp \
    src/customizemenudialog.cpp \
    src/datacopydialog.cpp \
    src/editbreakpointdialog.cpp \
    src/editfloatregister.cpp \
    src/entropydialog.cpp \
    src/exceptionrangedialog.cpp \
    src/favouritetools.cpp \
    src/gotodialog.cpp \
    src/hexeditdialog.cpp \
    src/hexlineedit.cpp \
    src/lineeditdialog.cpp \
    src/main.cpp \
    src/messagesbreakpoints.cpp \
    src/pagememoryrights.cpp \
    src/patchdialog.cpp \
    src/patchdialoggroupselector.cpp \
    src/selectfields.cpp \
    src/settingsdialog.cpp \
    src/shortcutsdialog.cpp \
    src/simpletracedialog.cpp \
    src/structwidget.cpp \
    src/symbolview.cpp \
    src/virtualmoddialog.cpp \
    src/wordeditdialog.cpp \
    src/xrefbrowsedialog.cpp \
    src/yararuleselectiondialog.cpp \
    src/mainwindow.cpp \
    src/abstracttableview.cpp \
    src/stringutil.cpp \
    src/configuration.cpp \
    src/miscutil.cpp \
    src/menubuilder.cpp \
    src/stdtable.cpp \
    src/qentropyview.cpp \
    src/shortcutedit.cpp \
    src/historylineedit.cpp
