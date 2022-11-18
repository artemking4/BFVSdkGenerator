// Object: UINewThingAsset
// ClassId: 5293
// RuntimeId: 39714
// TypeInfo: 0x0000000144D5F1E0
#include "../Entity/TreeNodeBase.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UINewThingAsset.h"

namespace CasablancaShared {
    class UINewThingAsset : public Entity::TreeNodeBase {
        Array<CasablancaShared::UINewThingAsset> Children; // 0x18
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UINewThingAsset) == 0x28);
}