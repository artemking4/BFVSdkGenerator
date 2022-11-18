// Object: ServerPersistenceCapturePointHandlerEntityData
// ClassId: 3161
// RuntimeId: 3968
// TypeInfo: 0x0000000144D13F80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceCapturePointHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 SquadCappingBonus; // 0x24
        Float32 CapturePointLeadTickTime; // 0x28
        Uint32 CapturePointLeadLimit; // 0x2C
        Float32 CaptureDominationTickTime; // 0x30
        Float32 CaptureContributionTickLimit; // 0x34
        Float32 CaptureContributionLimit; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(ServerPersistenceCapturePointHandlerEntityData) == 0x40);
}
#pragma pack(pop)