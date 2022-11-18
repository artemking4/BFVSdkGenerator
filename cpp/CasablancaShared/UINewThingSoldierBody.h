// Object: UINewThingSoldierBody
// ClassId: 5305
// RuntimeId: 39147
// TypeInfo: 0x0000000144D5EC60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierBody : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierBody) == 0x38);
}
#pragma pack(pop)