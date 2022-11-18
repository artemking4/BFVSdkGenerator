// Object: TriggerEntityData
// ClassId: 3453
// RuntimeId: 8383
// TypeInfo: 0x0000000144E8EFE0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class TriggerEntityData : public Entity::SpatialEntityData {
        Float32 Delay; // 0x60
        Boolean RunOnce; // 0x64
        Boolean Enabled; // 0x65
        char pad_0x66[0xA];
    }; // 0x70
    static_assert(sizeof(TriggerEntityData) == 0x70);
}
#pragma pack(pop)