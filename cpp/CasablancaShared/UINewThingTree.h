// Object: UINewThingTree
// ClassId: 843
// RuntimeId: 40228
// TypeInfo: 0x0000000144D5F160
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/UINewThingAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingTree : public Entity::TreeBase {
        Array<CasablancaShared::UINewThingAsset> Categories; // 0x20
    }; // 0x28
    static_assert(sizeof(UINewThingTree) == 0x28);
}
#pragma pack(pop)