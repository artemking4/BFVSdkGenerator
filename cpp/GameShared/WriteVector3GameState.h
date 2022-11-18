// Object: WriteVector3GameState
// ClassId: 124
// RuntimeId: 51396
// TypeInfo: 0x0000000144E84340
#include "../GameShared/WriteAntGameStateData.h"
#include "../Ant/AntRef.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class WriteVector3GameState : public GameShared::WriteAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0xC];
        Core::Vec3 Value; // 0x40
    }; // 0x50
    static_assert(sizeof(WriteVector3GameState) == 0x50);
}
#pragma pack(pop)