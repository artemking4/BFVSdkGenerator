// Object: WriteVector3TransformGameState
// ClassId: 125
// RuntimeId: 59525
// TypeInfo: 0x0000000144E842C0
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class WriteVector3TransformGameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0xC];
        Core::LinearTransform Value; // 0x40
    }; // 0x80
    static_assert(sizeof(WriteVector3TransformGameState) == 0x80);
}
#pragma pack(pop)