// Object: DiceUIDeepLinkGotoLinkEntityData
// ClassId: 2629
// RuntimeId: 62756
// TypeInfo: 0x0000000144DBB200
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkObject.h"
#include "../DiceCommonsShared/DiceUIDeepLinkContextAssetBase.h"
#include "../DiceCommonsShared/DiceUIDeepLinkHistoryPolicy.h"
#include "../DiceCommonsShared/DiceUIDeepLinkCollection.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkGotoLinkEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkObject Link; // 0x20
        DiceCommonsShared::DiceUIDeepLinkObject Referer; // 0x28
        DiceCommonsShared::DiceUIDeepLinkContextAssetBase Context; // 0x30
        DiceCommonsShared::DiceUIDeepLinkHistoryPolicy HistoryPolicy; // 0x38
        char pad_0x3C[0x4];
        DiceCommonsShared::DiceUIDeepLinkCollection ReplacementHistory; // 0x40
    }; // 0x48
    static_assert(sizeof(DiceUIDeepLinkGotoLinkEntityData) == 0x48);
}
#pragma pack(pop)