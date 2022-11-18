// Object: DamageTriggerEntityData
// ClassId: 3354
// RuntimeId: 48284
// TypeInfo: 0x0000000144D5B760
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DamageTriggerEntityData : public Entity::SpatialEntityData {
        Entity::MaterialDecl Material; // 0x60
        Float32 MaxHealth; // 0x64
        Float32 Radius; // 0x68
        Float32 DamageThreshold; // 0x6C
        Boolean Enabled; // 0x70
        Boolean ResetOnDestroyed; // 0x71
        Boolean CheckOcclusion; // 0x72
        char pad_0x73[0xD];
    }; // 0x80
    static_assert(sizeof(DamageTriggerEntityData) == 0x80);
}
#pragma pack(pop)