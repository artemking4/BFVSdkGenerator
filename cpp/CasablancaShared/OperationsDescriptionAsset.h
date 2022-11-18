// Object: OperationsDescriptionAsset
// ClassId: 612
// RuntimeId: 29324
// TypeInfo: 0x0000000144D14480
#include "../Core/Asset.h"
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Audio/SoundWaveAsset.h"
#include "../CasablancaShared/OperationsBattle.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFFactionId.h"
#include "../CasablancaShared/OperationScoringMultipliers.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OperationsDescriptionAsset : public Core::Asset {
        MovieBase::MovieTextureBaseAsset IntroMovie; // 0x20
        Audio::SoundWaveAsset IntroVoiceOver; // 0x28
        Array<CasablancaShared::OperationsBattle> Battles; // 0x30
        Int32 AllowEndAfterBattle; // 0x38
        Int32 BattalionCount; // 0x3C
        CString OperationName; // 0x40
        CString OperationNameSID; // 0x48
        CString OperationShortDescription; // 0x50
        CString OperationLongDescription; // 0x58
        Int32 OperationIndex; // 0x60
        CasablancaShared::BFFactionId Team1Faction; // 0x64
        CasablancaShared::BFFactionId Team2Faction; // 0x68
        CasablancaShared::OperationScoringMultipliers ScoringMultipliers; // 0x6C
        char pad_0x84[0x4];
    }; // 0x88
    static_assert(sizeof(OperationsDescriptionAsset) == 0x88);
}
#pragma pack(pop)