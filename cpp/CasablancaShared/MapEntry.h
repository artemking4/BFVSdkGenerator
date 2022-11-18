// Object: MapEntry
// ClassId: 4245
// RuntimeId: 50955
// TypeInfo: 0x0000000144D6DE30
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/Mutator.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MapEntry : public Core::DataContainer {
        CString LevelName; // 0x18
        CString GameMode; // 0x20
        CString LevelLocation; // 0x28
        Int32 GameSize; // 0x30
        Int32 Rounds; // 0x34
        Int32 PreRoundSize; // 0x38
        Int32 WarmUpSize; // 0x3C
        Int32 AllowedSpectators; // 0x40
        char pad_0x44[0x4];
        Array<CasablancaShared::Mutator> Mutators; // 0x48
    }; // 0x50
    static_assert(sizeof(MapEntry) == 0x50);
}
#pragma pack(pop)