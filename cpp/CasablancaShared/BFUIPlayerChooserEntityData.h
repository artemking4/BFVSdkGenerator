// Object: BFUIPlayerChooserEntityData
// ClassId: 2333
// RuntimeId: 45279
// TypeInfo: 0x0000000144D87120
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerChooserEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject ReferencePlayer; // 0x20
        Boolean AlivePlayerOnly; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerChooserEntityData) == 0x30);
}
#pragma pack(pop)