// Object: PrivateGamesBlueprint
// ClassId: 4464
// RuntimeId: 18972
// TypeInfo: 0x0000000144D6E130
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../CasablancaShared/AvailableGameData.h"
#include "../CasablancaShared/PlaygroundConstraints.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesBlueprint : public Core::DataContainer {
        CString BlueprintType; // 0x18
        CString Name; // 0x20
        CasablancaShared::AvailableGameData AvailableGameData; // 0x28
        CasablancaShared::PlaygroundConstraints PlaygroundConstraints; // 0x38
        Array<CasablancaShared::PrivateGamesPlayground> Presets; // 0x40
    }; // 0x48
    static_assert(sizeof(PrivateGamesBlueprint) == 0x48);
}
#pragma pack(pop)