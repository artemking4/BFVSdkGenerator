// Object: ReadFloatGameState
// ClassId: 111
// RuntimeId: 65320
// TypeInfo: 0x0000000144E84940
#include "../GameShared/ReadAntGameStateData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadFloatGameState : public GameShared::ReadAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ReadFloatGameState) == 0x38);
}
#pragma pack(pop)