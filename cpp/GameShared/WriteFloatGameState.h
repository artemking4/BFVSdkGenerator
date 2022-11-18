// Object: WriteFloatGameState
// ClassId: 120
// RuntimeId: 9019
// TypeInfo: 0x0000000144E84540
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class WriteFloatGameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameState; // 0x20
        Float32 Value; // 0x34
    }; // 0x38
    static_assert(sizeof(WriteFloatGameState) == 0x38);
}
#pragma pack(pop)