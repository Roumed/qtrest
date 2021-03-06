#ifndef ABSJSONRESTLISTMODEL_H
#define ABSJSONRESTLISTMODEL_H

#include "baserestlistmodel.h"

class QNetworkReply;

class AbstractJsonRestListModel : public BaseRestListModel
{
    Q_OBJECT
public:
    explicit AbstractJsonRestListModel(QObject *parent = 0);

private:
    //for get list
    QVariantList getVariantList(QByteArray bytes);

    //for get details for one element
    QVariantMap getVariantMap(QByteArray bytes);
};

#endif // ABSJSONRESTLISTMODEL_H
