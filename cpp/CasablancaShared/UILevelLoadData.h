// Object: UILevelLoadData
// ClassId: 5462
// RuntimeId: 17337
// TypeInfo: 0x0000000144D5FA60
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UILevelLoadConfiguration.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILevelLoadData : public Core::DataContainer {
        Guid LoadingMovieGuid; // 0x18
        Guid LoadingMovieVOGuid; // 0x28
        CString BundleName; // 0x38
        Array<CasablancaShared::UILevelLoadConfiguration> Configurations; // 0x40
        Boolean FadeToWhite; // 0x48
        Boolean HasLoadingMovie; // 0x49
        Boolean HasLoadingMovieVO; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(UILevelLoadData) == 0x50);
}
#pragma pack(pop)