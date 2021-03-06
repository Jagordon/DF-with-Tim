﻿using System;
using System.Collections.Generic;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalFigureClasses
{
     class EntityReputation
    {
        public int EntityID { get; private set; }
        public Entity Entity { private get; set; }
        private int? FirstAgelessYear { get; set; }
        private int? FirstAgelessSeasonCount { get; set; }
        private int? UnsolvedMurders { get; set; }

        public EntityReputation(XContainer data)
        {
            EntityID = Convert.ToInt32(data.Element("entity_id").Value);

            if (data.Element("first_ageless_year") != null)
            {
                FirstAgelessYear = Convert.ToInt32(data.Element("first_ageless_year").Value);
                FirstAgelessSeasonCount = Convert.ToInt32(data.Element("first_ageless_season_count").Value);
            }
            else if (data.Element("unsolved_murders") != null)
            {
                UnsolvedMurders = Convert.ToInt32(data.Element("unsolved_murders").Value);
            }
        }

        public override string ToString()
        {
            var data = "";
            if (UnsolvedMurders.HasValue)
                data = "Unsolved Murders - " + UnsolvedMurders.Value;
            else if (FirstAgelessYear != null)
                data = "FirstAgelessYear - " + FirstAgelessYear.Value + " - " + FirstAgelessSeasonCount;

            if (Entity == null)
                return EntityID + " - " + data;
            return Entity.Name + " - " + data;
        }

        internal void Export(int HFID)
        {
            var table = "HF_" + GetType().Name;



            var vals = new List<object> { HFID, EntityID, FirstAgelessYear, FirstAgelessSeasonCount, UnsolvedMurders};


            Database.ExportWorldItem(table, vals);
        }

    }

}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              