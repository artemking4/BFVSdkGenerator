// Object: AutoPlaySequenceContainer
// ClassId: 156
// RuntimeId: 21216
// TypeInfo: 0x0000000144DBB800
#include "../Core/Asset.h"
#include "../DiceCommonsShared/AutoPlaySequence.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AutoPlaySequenceContainer : public Core::Asset {
        Array<DiceCommonsShared::AutoPlaySequence> Sequences; // 0x20
    }; // 0x28
    static_assert(sizeof(AutoPlaySequenceContainer) == 0x28);
}
#pragma pack(pop)