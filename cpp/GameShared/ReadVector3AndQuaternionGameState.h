// Object: ReadVector3AndQuaternionGameState
// ClassId: 114
// RuntimeId: 21621
// TypeInfo: 0x0000000144E84640
#include "../GameShared/ReadAntGameStateData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadVector3AndQuaternionGameState : public GameShared::ReadAntGameStateData {
        Ant::AntRef GameStateVec; // 0x20
        Ant::AntRef GameStateQuat; // 0x34
    }; // 0x48
    static_assert(sizeof(ReadVector3AndQuaternionGameState) == 0x48);
}
#pragma pack(pop)