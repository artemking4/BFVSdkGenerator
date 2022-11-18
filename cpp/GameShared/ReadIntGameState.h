// Object: ReadIntGameState
// ClassId: 112
// RuntimeId: 61838
// TypeInfo: 0x0000000144E848C0
#include "../GameShared/ReadAntGameStateData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadIntGameState : public GameShared::ReadAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ReadIntGameState) == 0x38);
}
#pragma pack(pop)