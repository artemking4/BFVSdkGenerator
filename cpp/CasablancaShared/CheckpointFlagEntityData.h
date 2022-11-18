// Object: CheckpointFlagEntityData
// ClassId: 2472
// RuntimeId: 59303
// TypeInfo: 0x0000000144D4B670
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CheckpointFlagEntityData : public Entity::EntityData {
        Boolean In; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(CheckpointFlagEntityData) == 0x28);
}
#pragma pack(pop)