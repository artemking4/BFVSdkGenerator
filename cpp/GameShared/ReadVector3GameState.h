// Object: ReadVector3GameState
// ClassId: 115
// RuntimeId: 4614
// TypeInfo: 0x0000000144E847C0
#include "../GameShared/ReadAntGameStateData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ReadVector3GameState : public GameShared::ReadAntGameStateData {
        Ant::AntRef GameState; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ReadVector3GameState) == 0x38);
}
#pragma pack(pop)