// Object: AreaImmunityComponentData
// ClassId: 1716
// RuntimeId: 45298
// TypeInfo: 0x0000000144E81DC0
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class AreaImmunityComponentData : public Entity::GameComponentData {
        Boolean ClearAreaImmunity; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(AreaImmunityComponentData) == 0x90);
}
#pragma pack(pop)