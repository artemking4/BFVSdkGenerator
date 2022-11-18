// Object: DiceUIDeepLinkCollection
// ClassId: 1518
// RuntimeId: 300
// TypeInfo: 0x0000000144DBA410
#include "../Core/DataContainer.h"
#include "../DiceCommonsShared/DiceUIDeepLinkObject.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkCollection : public Core::DataContainer {
        Array<DiceCommonsShared::DiceUIDeepLinkObject> Links; // 0x18
    }; // 0x20
    static_assert(sizeof(DiceUIDeepLinkCollection) == 0x20);
}
#pragma pack(pop)