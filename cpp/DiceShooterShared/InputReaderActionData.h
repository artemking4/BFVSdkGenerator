// Object: InputReaderActionData
// ClassId: 2957
// RuntimeId: 13332
// TypeInfo: 0x0000000144DED420
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputReaderActionData : public DiceShooterShared::PhysicsActionBaseData {
        Int32 InputAction; // 0x58
        Boolean MuteValueDuringCorrection; // 0x5C
        Boolean OnlyWriteIfModified; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(InputReaderActionData) == 0x60);
}
#pragma pack(pop)