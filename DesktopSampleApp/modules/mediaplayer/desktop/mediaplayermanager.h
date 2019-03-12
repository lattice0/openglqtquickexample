#ifndef MediaPlayerManager_H
#define MediaPlayerManager_H

#include "componentmanagers/viewmanager.h"
#include "moduleinterface.h"
#include <QVariantMap>


class MediaPlayerManagerPrivate;
class MediaPlayerManager : public ViewManager {
    Q_OBJECT
    Q_INTERFACES(ModuleInterface)

    Q_DECLARE_PRIVATE(MediaPlayerManager)

public:
    Q_INVOKABLE MediaPlayerManager(QObject* parent = 0);
    ~MediaPlayerManager();

    virtual ViewManager* viewManager() override;
    virtual QString moduleName() override;

protected:
    virtual QQuickItem* createView(const QVariantMap& properties) override;

private:
    QScopedPointer<MediaPlayerManagerPrivate> d_ptr;

};

#endif // MediaPlayerManager_H
