// Object: GameModeViewDefinition
// ClassId: 516
// RuntimeId: 9758
// TypeInfo: 0x0000000144E837C0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../GameShared/PlayerViewDefinition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class GameModeViewDefinition : public Core::Asset {
        CString GameModeName; // 0x20
        Array<GameShared::PlayerViewDefinition> ViewDefinitions; // 0x28
        Float32 MaxVariableFps; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(GameModeViewDefinition) == 0x38);
}
#pragma pack(pop)