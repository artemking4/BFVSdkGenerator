// Object: MapRotation
// ClassId: 4246
// RuntimeId: 64939
// TypeInfo: 0x0000000144D6DDB0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/MapEntry.h"
#include "../CasablancaShared/PrivateGamesRotationBehavior.h"
#include "../CasablancaShared/PrivateGamesRoundBehavior.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MapRotation : public Core::DataContainer {
        Array<CasablancaShared::MapEntry> Maps; // 0x18
        CasablancaShared::PrivateGamesRotationBehavior RotationBehavior; // 0x20
        CasablancaShared::PrivateGamesRoundBehavior RoundBehavior; // 0x24
        Int32 MaxPlayersCount; // 0x28
        Int32 MinPlayersCount; // 0x2C
        Int32 AllowedSpectatorsCount; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(MapRotation) == 0x38);
}
#pragma pack(pop)