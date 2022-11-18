// Object: DamageAreaOverTimeBaseData
// ClassId: 3351
// RuntimeId: 52238
// TypeInfo: 0x0000000144D5B560
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DamageAreaOverTimeBaseData : public Entity::SpatialEntityData {
        Float32 AoERadius; // 0x60
        Float32 AoEDuration; // 0x64
        Boolean AutoStart; // 0x68
        Boolean DamageAll; // 0x69
        Boolean DamageVehicles; // 0x6A
        Boolean DamageCharacters; // 0x6B
        Boolean DamageBangers; // 0x6C
        Boolean DoTDamageShielded; // 0x6D
        Boolean DoTDamageFriendly; // 0x6E
        char pad_0x6F[0x1];
    }; // 0x70
    static_assert(sizeof(DamageAreaOverTimeBaseData) == 0x70);
}
#pragma pack(pop)