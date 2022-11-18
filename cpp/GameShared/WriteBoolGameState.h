// Object: WriteBoolGameState
// ClassId: 118
// RuntimeId: 54966
// TypeInfo: 0x0000000144E84440
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class WriteBoolGameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameState; // 0x20
        Boolean Value; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(WriteBoolGameState) == 0x38);
}
#pragma pack(pop)