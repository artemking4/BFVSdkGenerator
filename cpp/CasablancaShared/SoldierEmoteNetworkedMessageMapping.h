// Object: SoldierEmoteNetworkedMessageMapping
// ClassId: 4640
// RuntimeId: 9305
// TypeInfo: 0x0000000144D5D460
#include "../Core/DataContainer.h"
#include "../CasablancaShared/SoldierEmote.h"
#include "../GameShared/UIMessageType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierEmoteNetworkedMessageMapping : public Core::DataContainer {
        CasablancaShared::SoldierEmote Emote; // 0x18
        char pad_0x1C[0x4];
        Array<GameShared::UIMessageType> Messages; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierEmoteNetworkedMessageMapping) == 0x28);
}
#pragma pack(pop)