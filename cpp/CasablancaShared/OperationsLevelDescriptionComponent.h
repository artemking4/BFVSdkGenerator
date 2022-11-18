// Object: OperationsLevelDescriptionComponent
// ClassId: 4218
// RuntimeId: 12996
// TypeInfo: 0x0000000144D2A320
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/Guid.h"
#include "../Global/Boolean.h"
#include "../Audio/SoundAsset.h"
#include "../CasablancaShared/OperationsDescriptionAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OperationsLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Guid IntroMovieAttGuid; // 0x18
        Guid IntroMovieAttVOGuid; // 0x28
        Guid IntroMovieDefGuid; // 0x38
        Guid IntroMovieDefVOGuid; // 0x48
        Audio::SoundAsset IntroVoiceOverAttackers; // 0x58
        Audio::SoundAsset IntroVoiceOverDefenders; // 0x60
        CasablancaShared::OperationsDescriptionAsset OperationsDescription; // 0x68
        Boolean HasIntroMovieAtt; // 0x70
        Boolean HasIntroMovieAttVO; // 0x71
        Boolean HasIntroMovieDef; // 0x72
        Boolean HasIntroMovieDefVO; // 0x73
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(OperationsLevelDescriptionComponent) == 0x78);
}
#pragma pack(pop)