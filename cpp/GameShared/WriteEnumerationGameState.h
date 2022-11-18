// Object: WriteEnumerationGameState
// ClassId: 119
// RuntimeId: 42377
// TypeInfo: 0x0000000144E845C0
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class WriteEnumerationGameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameState; // 0x20
        Int32 Value; // 0x34
    }; // 0x38
    static_assert(sizeof(WriteEnumerationGameState) == 0x38);
}
#pragma pack(pop)