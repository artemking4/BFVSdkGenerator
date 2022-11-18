// Object: ReadVector3TransformGameState
// ClassId: 116
// RuntimeId: 54572
// TypeInfo: 0x0000000144E84740
#include "../GameShared/ReadAntGameStateData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadVector3TransformGameState : public GameShared::ReadAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ReadVector3TransformGameState) == 0x38);
}
#pragma pack(pop)