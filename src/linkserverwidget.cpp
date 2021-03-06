// =====================================================================================
// 
//       Filename:  LinkServerWidget.cpp
//
//    Description:  服务管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年03月11日 09时25分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>

#include "LinkServerWidget.h"
#include "ServerTreeView.h"

LinkServerWidget::LinkServerWidget()
{
	createMainWeiget();
}

LinkServerWidget::~LinkServerWidget()
{

}

void LinkServerWidget::createMainWeiget()
{
	serverLayout = new QVBoxLayout();
	serverbuttonLayout = new QHBoxLayout();

	serverTreeView = new ServerTreeView;
	getServerButton = new QPushButton(tr("获取服务列表"));;
	runServerButton = new QPushButton(tr("自动运行服务"));;
	killServerButton = new QPushButton(tr("关闭选中服务"));;
	serverbuttonLayout->addStretch();
	serverbuttonLayout->addWidget(getServerButton);
	serverbuttonLayout->addStretch();
	serverbuttonLayout->addWidget(runServerButton);
	serverbuttonLayout->addStretch();
	serverbuttonLayout->addWidget(killServerButton);
	serverbuttonLayout->addStretch();

	serverLayout->addWidget(serverTreeView);
	serverLayout->addLayout(serverbuttonLayout);

	setLayout(serverLayout);
}
