// Object: ReportInstallationProgressEntity
// ClassId: 7354
// RuntimeId: 15925
// TypeInfo: 0x0000000144ED97B0
#include "../Entity/Entity.h"

namespace Entity {
    class ReportInstallationProgressEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ReportInstallationProgressEntity) == 0x80);
}