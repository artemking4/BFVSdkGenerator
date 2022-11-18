// Object: BFScreenTransitionEntityData
// ClassId: 2121
// RuntimeId: 20284
// TypeInfo: 0x0000000144D5B860
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFScreenTransitionEntityData : public Entity::EntityData {
        Boolean DestroyOnHidden; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFScreenTransitionEntityData) == 0x28);
}
#pragma pack(pop)