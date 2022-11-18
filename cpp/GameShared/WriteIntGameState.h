// Object: WriteIntGameState
// ClassId: 121
// RuntimeId: 16240
// TypeInfo: 0x0000000144E844C0
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class WriteIntGameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameState; // 0x20
        Int32 Value; // 0x34
    }; // 0x38
    static_assert(sizeof(WriteIntGameState) == 0x38);
}
#pragma pack(pop)