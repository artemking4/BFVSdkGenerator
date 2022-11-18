// Object: BFUIPlayVideoEntityData
// ClassId: 2332
// RuntimeId: 5233
// TypeInfo: 0x0000000144D96D10
#include "../Entity/EntityData.h"
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFUIPlayVideoEntityMarker.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayVideoEntityData : public Entity::EntityData {
        MovieBase::MovieTextureBaseAsset Movie; // 0x20
        MovieBase::MovieTextureBaseAsset DynamicMovie; // 0x28
        CString NetworkStreamingUrl; // 0x30
        CString VideoIdentifier; // 0x38
        Float32 MarkerOffset; // 0x40
        char pad_0x44[0x4];
        Array<CasablancaShared::BFUIPlayVideoEntityMarker> MarkerOffsets; // 0x48
        Boolean Loop; // 0x50
        Boolean KeepBlackScreen; // 0x51
        Boolean AllowSkip; // 0x52
        Boolean DrawInWidget; // 0x53
        Boolean RenderWorld; // 0x54
        Boolean EnablePause; // 0x55
        Boolean StartPaused; // 0x56
        Boolean DrawOnTop; // 0x57
        Boolean Force30HzFramerate; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(BFUIPlayVideoEntityData) == 0x60);
}
#pragma pack(pop)