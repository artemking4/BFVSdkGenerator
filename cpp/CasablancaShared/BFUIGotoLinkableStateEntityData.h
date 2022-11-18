// Object: BFUIGotoLinkableStateEntityData
// ClassId: 2279
// RuntimeId: 43807
// TypeInfo: 0x0000000144D9D710
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIDeepLinkTargetAsset.h"
#include "../DiceCommonsShared/DiceUIDeepLinkHistoryPolicy.h"
#include "../DiceCommonsShared/DiceUIDeepLinkCollection.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGotoLinkableStateEntityData : public Entity::EntityData {
        CasablancaShared::BFUIDeepLinkTargetAsset Target; // 0x20
        CasablancaShared::BFUIDeepLinkTargetAsset Source; // 0x28
        DiceCommonsShared::DiceUIDeepLinkHistoryPolicy HistoryPolicy; // 0x30
        char pad_0x34[0x4];
        DiceCommonsShared::DiceUIDeepLinkCollection ReplacementHistory; // 0x38
        Int32 Dummy; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(BFUIGotoLinkableStateEntityData) == 0x48);
}
#pragma pack(pop)