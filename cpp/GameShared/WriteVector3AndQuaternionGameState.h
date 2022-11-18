// Object: WriteVector3AndQuaternionGameState
// ClassId: 123
// RuntimeId: 29001
// TypeInfo: 0x0000000144E84240
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class WriteVector3AndQuaternionGameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameStateVec; // 0x20
        char pad_0x34[0xC];
        Core::LinearTransform Value; // 0x40
        Ant::AntRef GameStateQuat; // 0x80
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(WriteVector3AndQuaternionGameState) == 0xA0);
}
#pragma pack(pop)