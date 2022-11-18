// Object: GameModeSettings
// ClassId: 4989
// RuntimeId: 12609
// TypeInfo: 0x0000000144D09530
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/GameModeInformation.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameModeSettings : public Core::SystemSettings {
        Array<CasablancaShared::GameModeInformation> Information; // 0x20
    }; // 0x28
    static_assert(sizeof(GameModeSettings) == 0x28);
}
#pragma pack(pop)