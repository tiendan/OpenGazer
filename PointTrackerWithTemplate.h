#pragma once
#include "utils.h"

class PointTrackerWithTemplate {
    cv::Mat _templateRight, _templateLeft;
    bool _templatesInitialized;
    cv::Mat _temporarySearchArea, _temporarySearchResults;

public:
    PointTrackerWithTemplate();
    ~PointTrackerWithTemplate();
    void process();
    void draw();
    void extractTemplates();
    void updatePointPositions();
};