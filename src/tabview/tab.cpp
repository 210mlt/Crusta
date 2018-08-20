#include "tab.h"
#include "../webview/webview.h"
#include <QVBoxLayout>

Tab::Tab(QWidget *parent)
    : QWidget(parent)
{
    m_title = tr("New Tab");
    m_webView = new WebView(this);

    QVBoxLayout *vBoxLayout = new QVBoxLayout(this);
    setLayout(vBoxLayout);
    vBoxLayout->setContentsMargins(0, 0, 0, 0);
    vBoxLayout->setSpacing(0);
    vBoxLayout->addWidget(m_webView);
}

QString Tab::title() const
{
    return m_title;
}

WebView *Tab::webview() const
{
    return m_webView;
}

TabListItem *Tab::tabListItem() const
{
    return m_tabListItem;
}

void Tab::setTabListItem(TabListItem *tabListItem)
{
    m_tabListItem = tabListItem;
}

void Tab::closeTab()
{
    deleteLater();
}
