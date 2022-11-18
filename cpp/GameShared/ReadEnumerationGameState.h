// Object: ReadEnumerationGameState
// ClassId: 110
// RuntimeId: 42378
// TypeInfo: 0x0000000144E849C0
#include "../GameShared/ReadAntGameStateData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadEnumerationGameState : public GameShared::ReadAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ReadEnumerationGameState) == 0x38);
}
#pragma pack(pop)