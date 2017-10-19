/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */


#include "banning.h"

#include "jobs/converters.h"
#include <QtCore/QStringBuilder>

using namespace QMatrixClient;

static const auto basePath = QStringLiteral("/_matrix/client/r0");

BanJob::BanJob(QString roomId, QString user_id, QString reason)
    : BaseJob(HttpVerb::Post, "BanJob",
        basePath % "/rooms/" % roomId % "/ban",
        Query { }
    )
{
    Data _data;
    _data.insert("user_id", toJson(user_id));
    if (!reason.isEmpty())
        _data.insert("reason", toJson(reason));
    setRequestData(_data);
}

UnbanJob::UnbanJob(QString roomId, QString user_id)
    : BaseJob(HttpVerb::Post, "UnbanJob",
        basePath % "/rooms/" % roomId % "/unban",
        Query { }
    )
{
    Data _data;
    _data.insert("user_id", toJson(user_id));
    setRequestData(_data);
}

