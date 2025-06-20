WITH user_counts AS (
    SELECT user_id, COUNT(*) AS cnt
    FROM MovieRating
    GROUP BY user_id
),
movie_avg AS (
    SELECT movie_id, AVG(rating * 1.0) AS avg_rating
    FROM MovieRating
    WHERE created_at BETWEEN '2020-02-01' AND '2020-02-29'
    GROUP BY movie_id
),
top_user AS (
    SELECT TOP 1 u.name AS results
    FROM Users u
    JOIN user_counts uc ON u.user_id = uc.user_id
    ORDER BY uc.cnt DESC, u.name ASC
),
top_movie AS (
    SELECT TOP 1 m.title AS results
    FROM Movies m
    JOIN movie_avg ma ON m.movie_id = ma.movie_id
    ORDER BY ma.avg_rating DESC, m.title ASC
)

SELECT * FROM top_user
UNION ALL
SELECT * FROM top_movie;
