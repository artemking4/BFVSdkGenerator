// Object: NuiSpeechLevelConfiguration
// ClassId: 602
// RuntimeId: 51594
// TypeInfo: 0x0000000144D298A0
#include "../Core/Asset.h"
#include "../CasablancaShared/NuiSpeechCompiledGrammar.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechLevelConfiguration : public Core::Asset {
        Array<CasablancaShared::NuiSpeechCompiledGrammar> CompiledGrammars; // 0x20
    }; // 0x28
    static_assert(sizeof(NuiSpeechLevelConfiguration) == 0x28);
}
#pragma pack(pop)