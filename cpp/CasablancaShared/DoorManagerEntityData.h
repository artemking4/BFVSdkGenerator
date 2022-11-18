// Object: DoorManagerEntityData
// ClassId: 2668
// RuntimeId: 32768
// TypeInfo: 0x0000000144D011A0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DoorManagerEntityData : public Entity::EntityData {
        Float32 MaxInteractionTimeout; // 0x20
        Float32 MaxPlayerSpeed; // 0x24
    }; // 0x28
    static_assert(sizeof(DoorManagerEntityData) == 0x28);
}
#pragma pack(pop)