#pragma once

#include "mvItemRegistry.h"

namespace Marvel {

    class mvDrawlist : public mvAppItem
    {

    public:

        static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

        MV_APPLY_WIDGET_REGISTRATION(mvAppItemType::mvDrawlist, add_drawlist)

        MV_START_CHILDREN
            MV_ADD_CHILD(mvAppItemType::mvDrawLayer),
            MV_ADD_CHILD(mvAppItemType::mvDrawLine),
            MV_ADD_CHILD(mvAppItemType::mvDrawArrow),
            MV_ADD_CHILD(mvAppItemType::mvDrawTriangle),
            MV_ADD_CHILD(mvAppItemType::mvDrawCircle),
            MV_ADD_CHILD(mvAppItemType::mvDrawEllipse),
            MV_ADD_CHILD(mvAppItemType::mvDrawBezierCubic),
            MV_ADD_CHILD(mvAppItemType::mvDrawBezierQuadratic),
            MV_ADD_CHILD(mvAppItemType::mvDrawQuad),
            MV_ADD_CHILD(mvAppItemType::mvDrawRect),
            MV_ADD_CHILD(mvAppItemType::mvDrawText),
            MV_ADD_CHILD(mvAppItemType::mvDrawPolygon),
            MV_ADD_CHILD(mvAppItemType::mvDrawPolyline),
            MV_ADD_CHILD(mvAppItemType::mvDrawImageQuad),
            MV_ADD_CHILD(mvAppItemType::mvDrawImage),
            MV_ADD_CHILD(mvAppItemType::mvDrawNode),
        MV_END_CHILDREN

    public:

        explicit mvDrawlist(mvUUID uuid);

        void draw(ImDrawList* drawlist, float x, float y) override;
        void handleSpecificRequiredArgs(PyObject* dict) override;
        void getSpecificConfiguration(PyObject* dict) override;
        void applySpecificTemplate(mvAppItem* item) override;

    private:

        float  _startx = 0.0f;
        float  _starty = 0.0f;

    };
}
